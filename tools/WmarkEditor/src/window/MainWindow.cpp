﻿/*
** Anxiu Li, 2019, BSD (2)
*/

////////////////////////////////////////////////////////////////////////////////

#include "precomp.h"

#include "../view/TextEditor.h"
#include "MainWindow.h"

////////////////////////////////////////////////////////////////////////////////
namespace CSL {
////////////////////////////////////////////////////////////////////////////////

//MainWindow

MainWindow::MainWindow(int w, int h, const char* t) : Fl_Double_Window(w, h, t), 
                                                      m_textEditor(std::make_shared<TextEditor>(50, 100, 200, 300)), m_menuBar(std::make_shared<Fl_Menu_Bar>(0, 0, 200, 20))
{
	m_menuBar->add("Load", 0, load_cb, &m_cmdFunc);
}

MainWindow::~MainWindow() noexcept
{
}

//commands
void MainWindow::set_LoadCommand(const CommandFunc& cf)
{
	m_cmdFunc = cf;
}

//methods
void MainWindow::load_cb(Fl_Widget*, void* v)
{
	Fl_Native_File_Chooser fc;
	fc.title("Choose file");
	fc.type(Fl_Native_File_Chooser::BROWSE_FILE);
	if (fc.show() == 0) {
		CommandFunc& cmdFunc = (*(CommandFunc*)v);
		std::string fn(fc.filename());
		if (!cmdFunc(std::make_any<std::string>(fn))){
			fl_alert("Error in opening file!");
		}
	}
	return;
}

////////////////////////////////////////////////////////////////////////////////
}
////////////////////////////////////////////////////////////////////////////////
