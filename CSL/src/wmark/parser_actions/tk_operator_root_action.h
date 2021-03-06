﻿/*
** Xin YUAN, 2019, BSD (2)
*/

////////////////////////////////////////////////////////////////////////////////
#ifndef __TK_OPERATOR_ROOT_ACTION_H__
#define __TK_OPERATOR_ROOT_ACTION_H__
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
namespace CSL {
////////////////////////////////////////////////////////////////////////////////

// WmarkParserTkOperatorRootAction

class WmarkParserTkOperatorRootAction : public IRdParserAction
{
public:
	WmarkParserTkOperatorRootAction() noexcept;
	~WmarkParserTkOperatorRootAction() noexcept;

// IRdParserAction methods
	virtual void SetParameter(const std::any& param);
	virtual bool DoAction(const std::string& strToken, std::vector<std::string>& vecError);
	
};

///////////////////////////s/////////////////////////////////////////////////////
}
////////////////////////////////////////////////////////////////////////////////
#endif
////////////////////////////////////////////////////////////////////////////////
