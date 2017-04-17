/////////////////////////////////////////////////////////////////////////////
// Name:        wx/msw/statbox.h
// Purpose:     wxStaticBox class
// Author:      Julian Smart
// Modified by:
// Created:     01/02/97
// Copyright:   (c) Julian Smart
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_MSW_STATBOX_H_
#define _WX_MSW_STATBOX_H_

// Group box
class WXDLLIMPEXP_CORE wxStaticBox : public wxStaticBoxBase
{
public:
    wxStaticBox() { }

    wxStaticBox(wxWindow *parent, wxWindowID id,
                const wxString& label,
                const wxPoint& pos = wxDefaultPosition,
                const wxSize& size = wxDefaultSize,
                long style = 0,
                const wxString& name = wxStaticBoxNameStr)
    {
        Create(parent, id, label, pos, size, style, name);
    }

    bool Create(wxWindow *parent, wxWindowID id,
                const wxString& label,
                const wxPoint& pos = wxDefaultPosition,
                const wxSize& size = wxDefaultSize,
                long style = 0,
                const wxString& name = wxStaticBoxNameStr);

    /// Implementation only
    virtual void GetBordersForSizer(int *borderTop, int *borderOther) const wxOVERRIDE;

    virtual WXDWORD MSWGetStyle(long style, WXDWORD *exstyle) const wxOVERRIDE;

    // returns true if the platform should explicitly apply a theme border
    virtual bool CanApplyThemeBorder() const wxOVERRIDE { return false; }

protected:
    virtual wxSize DoGetBestSize() const wxOVERRIDE;

public:
    virtual WXLRESULT MSWWindowProc(WXUINT nMsg, WXWPARAM wParam, WXLPARAM lParam) wxOVERRIDE;

protected:
    // return the region with all the windows inside this static box excluded
    virtual WXHRGN MSWGetRegionWithoutChildren();

    // remove the parts which are painted by static box itself from the given
    // region which is embedded in a rectangle (0, 0)-(w, h)
    virtual void MSWGetRegionWithoutSelf(WXHRGN hrgn, int w, int h);

    // paint the given rectangle with our background brush/colour
    virtual void PaintBackground(wxDC& dc, const struct tagRECT& rc);
    // paint the foreground of the static box
    virtual void PaintForeground(wxDC& dc, const struct tagRECT& rc);

    void OnPaint(wxPaintEvent& event);

    wxDECLARE_DYNAMIC_CLASS_NO_COPY(wxStaticBox);
};

#endif // _WX_MSW_STATBOX_H_

