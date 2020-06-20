﻿/*
** Xin YUAN, 2019, BSD (2)
*/

////////////////////////////////////////////////////////////////////////////////
#ifndef __TK_VEC_ACTION_H__
#define __TK_VEC_ACTION_H__
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
namespace CSL {
////////////////////////////////////////////////////////////////////////////////

// WmarkParserVecAction

class WmarkParserVecAction : public IRdParserAction
{
public:
	WmarkParserVecAction() noexcept;
	~WmarkParserVecAction() noexcept;

// IRdParserAction methods
	virtual void SetParameter(const std::any& param);
	virtual bool DoAction(const std::string& strToken, std::vector<std::string>& vecError);

};

////////////////////////////////////////////////////////////////////////////////
}
////////////////////////////////////////////////////////////////////////////////
#endif
////////////////////////////////////////////////////////////////////////////////
