﻿/*
** Anxiu Li, 2019, BSD (2)
*/

////////////////////////////////////////////////////////////////////////////////
#ifndef __TEXT_APP_H__
#define __TEXT_APP_H__
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
namespace CSL {
////////////////////////////////////////////////////////////////////////////////

// TextApp

class TextApp
{
public:
	TextApp();
	TextApp(const TextApp&) = delete;
	TextApp& operator=(const TextApp&) = delete;
	~TextApp() noexcept;

//methods
	bool Init();
	int Run();

private:
	std::shared_ptr<TextViewModel>  m_textVM;
	std::shared_ptr<MainWindow> m_wndMain;
};

////////////////////////////////////////////////////////////////////////////////
}
////////////////////////////////////////////////////////////////////////////////
#endif
////////////////////////////////////////////////////////////////////////////////
