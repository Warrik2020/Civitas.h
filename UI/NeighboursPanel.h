#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class NeighboursPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NeighboursPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "NeighboursPanel") {}
    public:
        void ShowPage() const { CallStatic("ShowPage", nullptr, 0); }
        void HidePage() const { CallStatic("HidePage", nullptr, 0); }
        void CloseDocked() const { CallStatic("CloseDocked", nullptr, 0); }
        void Open() const { CallStatic("Open", nullptr, 0); }
        void OpenOn(int arcId) const { void* args[] = { &arcId }; CallStatic("OpenOn", args, 1); }
        void SetVisible(bool visible) const { void* args[] = { &visible }; Call("SetVisible", args, 1); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* value() const { return ReadField<void*>("value"); }
        void SetValue(void* value) const { WriteField<void*>("value", value); }
        void* tipTitle() const { return ReadField<void*>("tipTitle"); }
        void SetTipTitle(void* value) const { WriteField<void*>("tipTitle", value); }
        void* tipBody() const { return ReadField<void*>("tipBody"); }
        void SetTipBody(void* value) const { WriteField<void*>("tipBody", value); }
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* bg() const { return ReadField<void*>("bg"); }
        void SetBg(void* value) const { WriteField<void*>("bg", value); }
        void* accent() const { return ReadField<void*>("accent"); }
        void SetAccent(void* value) const { WriteField<void*>("accent", value); }
        void* title() const { return ReadField<void*>("title"); }
        void SetTitle(void* value) const { WriteField<void*>("title", value); }
        void* sub() const { return ReadField<void*>("sub"); }
        void SetSub(void* value) const { WriteField<void*>("sub", value); }
        int arcId() const { return ReadField<int>("arcId"); }
        void SetArcId(int value) const { WriteField<int>("arcId", value); }
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* bg() const { return ReadField<void*>("bg"); }
        void SetBg(void* value) const { WriteField<void*>("bg", value); }
        void* accent() const { return ReadField<void*>("accent"); }
        void SetAccent(void* value) const { WriteField<void*>("accent", value); }
        void* date() const { return ReadField<void*>("date"); }
        void SetDate(void* value) const { WriteField<void*>("date", value); }
        void* text() const { return ReadField<void*>("text"); }
        void SetText(void* value) const { WriteField<void*>("text", value); }
        void* flavor() const { return ReadField<void*>("flavor"); }
        void SetFlavor(void* value) const { WriteField<void*>("flavor", value); }
        void* entry() const { return ReadField<void*>("entry"); }
        void SetEntry(void* value) const { WriteField<void*>("entry", value); }
    };
}
