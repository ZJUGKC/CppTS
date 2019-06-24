﻿/*
** Xin YUAN, 2019, BSD (2)
*/

////////////////////////////////////////////////////////////////////////////////
#ifndef __COMMENT_ACTION_H__
#define __COMMENT_ACTION_H__
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
namespace CSL {
////////////////////////////////////////////////////////////////////////////////

// WmarkScannerCommentAction

class WmarkScannerCommentAction : public IRdScannerAction
{
public:
	WmarkScannerCommentAction() throw();
	~WmarkScannerCommentAction() throw();

// IRdScannerAction
	virtual bool Scan(std::istream& stm, RdActionStack& stk, RdToken& token);
};

////////////////////////////////////////////////////////////////////////////////
}
////////////////////////////////////////////////////////////////////////////////
#endif
////////////////////////////////////////////////////////////////////////////////
