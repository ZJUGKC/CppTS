﻿/*
** Anxiu Li, 2019, BSD (2)
*/

////////////////////////////////////////////////////////////////////////////////
#ifndef __MAIN_WINDOW_H__
#define __MAIN_WINDOW_H__
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
namespace CSL {
////////////////////////////////////////////////////////////////////////////////

// MainWindow

class MainWindow : public Fl_Double_Window
{
public:
	MainWindow(int w, int h, const char* t);
	MainWindow(const MainWindow&) = delete;
	MainWindow& operator=(const MainWindow&) = delete;
	~MainWindow() noexcept;

//properties
	std::shared_ptr<TextEditor> get_TextEditor() noexcept;

//commands
	void set_LoadCommand(CommandFunc&& cf);

//notifications
	PropertyNotification get_Notification();

private:
//callbacks
	static void load_cb(Fl_Widget*, void* v);

private:
//commands
	CommandFunc m_cmdFunc;

//UI
	std::shared_ptr<TextEditor> m_textEditor;
	std::shared_ptr<Fl_Menu_Bar> m_menuBar;
};

////////////////////////////////////////////////////////////////////////////////
}
////////////////////////////////////////////////////////////////////////////////
#endif
////////////////////////////////////////////////////////////////////////////////

