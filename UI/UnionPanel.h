#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UnionPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnionPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UnionPanel") {}
    public:
        void Show(int playerId, int otherId, void* onResolved, void* kind = nullptr, void* theyLead = nullptr) const { void* args[] = { &playerId, &otherId, onResolved, kind, theyLead }; CallStatic("Show", args, 5); }
        void ShowOffer(void* offer, void* onResolved) const { void* args[] = { offer, onResolved }; CallStatic("ShowOffer", args, 2); }
        void CloseIfOpen() const { CallStatic("CloseIfOpen", nullptr, 0); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        void* button() const { return ReadField<void*>("button"); }
        void SetButton(void* value) const { WriteField<void*>("button", value); }
        void* frame() const { return ReadField<void*>("frame"); }
        void SetFrame(void* value) const { WriteField<void*>("frame", value); }
        void* title() const { return ReadField<void*>("title"); }
        void SetTitle(void* value) const { WriteField<void*>("title", value); }
        void* note() const { return ReadField<void*>("note"); }
        void SetNote(void* value) const { WriteField<void*>("note", value); }
    };
}
