﻿/*
** Xin YUAN, 2019, BSD (2)
*/

////////////////////////////////////////////////////////////////////////////////

#include "precomp.h"

#include "../WmarkIDs.h"

#include "tk_action.h"

////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
namespace CSL {
////////////////////////////////////////////////////////////////////////////////

// WmarkScannerTkAction

WmarkScannerTkAction::WmarkScannerTkAction() throw()
{
}
WmarkScannerTkAction::~WmarkScannerTkAction() throw()
{
}

// IRdScannerAction
bool WmarkScannerTkAction::Scan(std::istream& stm, RdActionStack& stk, uint32_t& uID, std::string& strToken)
{
	//get a character
	char ch;
	stm.get(ch);
	if( stm.eof() ) {
		uID = TK_END_OF_EVENT;
		return true;
	}
	if( !stm.good() )
		return false;
	strToken += ch;

	//return
	if( ch == '\n' ) {
		uID = WMARK_TK_RETURN;
		return true;
	}
	if( ch == '\r' ) {
		stm.get(ch);
		if( stm.eof() ) {
			uID = WMARK_TK_RETURN;
			return true;
		}
		if( !stm.good() )
			return false;
		if( ch == '\n' ) {
			strToken += ch;
			uID = WMARK_TK_RETURN;
			return true;
		}
		stm.unget();
		uID = WMARK_TK_RETURN;
		return true;
	}

	//indent
	if( ch == '\t' ) {
		uID = WMARK_TK_INDENT;
		return true;
	}

	//<
	if( ch == '<' ) {
		stk.push(WMARK_SCANNER_COMMENT_ACTION);
		return true;
	}

	//others
	stk.push(WMARK_SCANNER_TEXT_ACTION);

	return true;
}

////////////////////////////////////////////////////////////////////////////////
}
////////////////////////////////////////////////////////////////////////////////
