/*
** Mei LiJuan, 2019
*/

////////////////////////////////////////////////////////////////////////////////
#ifndef __REPLACE_DIALOG_H__
#define __REPLACE_DIALOG_H__
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
namespace CSL {
////////////////////////////////////////////////////////////////////////////////

class ReplaceDialog : public Fl_Window
{
public:
	ReplaceDialog(int w, int h, const char* t);
	~ReplaceDialog() noexcept;
	
private:
	std::shared_ptr<Fl_Input> m_replaceFind;
    std::shared_ptr<Fl_Input> m_replaceWith;
    std::shared_ptr<Fl_Button> m_replaceAll;
    std::shared_ptr<Fl_Return_Button> m_replaceNext;
    std::shared_ptr<Fl_Button> m_replaceCancel;
};

////////////////////////////////////////////////////////////////////////////////
}
////////////////////////////////////////////////////////////////////////////////
#endif
////////////////////////////////////////////////////////////////////////////////