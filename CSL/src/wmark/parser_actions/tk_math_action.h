﻿/*
** Xin YUAN, 2019, BSD (2)
*/

////////////////////////////////////////////////////////////////////////////////
#ifndef __TK_MATH_ACTION_H__
#define __TK_MATH_ACTION_H__
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
namespace CSL {
////////////////////////////////////////////////////////////////////////////////

// WmarkParserTkMathAction

class WmarkParserTkMathAction : public IRdParserAction
{
public:
	WmarkParserTkMathAction() noexcept;
	~WmarkParserTkMathAction() noexcept;

// IRdParserAction methods
	virtual void SetParameter(const std::any& param);
	virtual bool DoAction(const std::string& strToken, std::vector<std::string>& vecError);
	
};

////////////////////////////////////////////////////////////////////////////////
}
////////////////////////////////////////////////////////////////////////////////
#endif
////////////////////////////////////////////////////////////////////////////////
