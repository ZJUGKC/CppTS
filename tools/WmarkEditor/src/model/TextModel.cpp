/*
** Xin YUAN, 2019, BSD (2)
*/

////////////////////////////////////////////////////////////////////////////////

#include "precomp.h"

#include "TextModel.h"

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
bool TextModel::Load(std::string str) {
	std::ifstream tfile;
	tfile.open(str);
	tfile.seekg(0, std::ios::end);
	length = tfile.tellg();
	tfile.seekg(0, std::ios::beg);
	char *buffer = new char[length];
	t.read(buffer, length);
	std::string sbuffer = buffer;
	m_spBuffer->text(sbuffer);
	t.close();
}

////////////////////////////////////////////////////////////////////////////////
}
////////////////////////////////////////////////////////////////////////////////
