﻿/*
** Anxiu Li, 2019, BSD (2)
*/

////////////////////////////////////////////////////////////////////////////////

#include "precomp.h"

#include "../../common/TextDef.h"
#include "../MainWindow.h"

////////////////////////////////////////////////////////////////////////////////
namespace CSL {
////////////////////////////////////////////////////////////////////////////////

// MainWindow

PropertyNotification MainWindow::get_Notification()
{
	return [this](uint32_t uID)
	{
		if (uID == PROPID_TEXT) {
			//this->m_textEditor->;
		}
	};
}

////////////////////////////////////////////////////////////////////////////////
}
////////////////////////////////////////////////////////////////////////////////