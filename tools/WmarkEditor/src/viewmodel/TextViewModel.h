﻿/*
** Xin YUAN, 2019, BSD (2)
*/

////////////////////////////////////////////////////////////////////////////////
#ifndef __TEXT_VIEW_MODEL_H__
#define __TEXT_VIEW_MODEL_H__
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
namespace CSL {
////////////////////////////////////////////////////////////////////////////////

// TextViewModel

class TextViewModel : public PropertyTrigger
{
public:
	TextViewModel() noexcept;
	TextViewModel(const TextViewModel&) = delete;
	TextViewModel& operator=(const TextViewModel&) = delete;
	~TextViewModel() noexcept;

//properties
	std::shared_ptr<Fl_Text_Buffer> get_TextBuf() noexcept;

//commands
	CommandFunc get_LoadCommand();

//methods
	void SetModel(const std::shared_ptr<TextModel>& spModel);

private:
	PropertyNotification get_notification();

private:
	std::shared_ptr<TextModel>  m_spModel;
};

////////////////////////////////////////////////////////////////////////////////
}
////////////////////////////////////////////////////////////////////////////////
#endif
////////////////////////////////////////////////////////////////////////////////
