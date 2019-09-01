﻿/*
** Xin YUAN, 2019, BSD (2)
*/

////////////////////////////////////////////////////////////////////////////////

#include "precomp.h"

#include "TextModel.h"

#include "../common/TextDef.h"

////////////////////////////////////////////////////////////////////////////////
namespace CSL {
////////////////////////////////////////////////////////////////////////////////

// TextModel

TextModel::TextModel() : m_spBuffer(std::make_shared<Fl_Text_Buffer>())
{
}
TextModel::~TextModel() noexcept
{
}

//properties
std::shared_ptr<Fl_Text_Buffer> TextModel::get_TextBuf() noexcept
{
	return m_spBuffer;
}

//methods
bool TextModel::Load(const std::string& str)
{
	if (m_spBuffer->loadfile(str.c_str()) == 0) {
		Fire(PROPID_TEXT);
		return true;
	}
	return false;
}

bool TextModel::Save(const std::string& str)
{
	if (m_spBuffer->savefile(str.c_str()) == 0) {
		return true;
	}
	return false;
}

////////////////////////////////////////////////////////////////////////////////
}
////////////////////////////////////////////////////////////////////////////////
