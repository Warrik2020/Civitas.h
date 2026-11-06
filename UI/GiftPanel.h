#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class GiftPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GiftPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "GiftPanel") {}
    public:
        void Show(int playerId, int targetId, void* onDone) const { void* args[] = { &playerId, &targetId, onDone }; CallStatic("Show", args, 3); }
        int reason() const { return ReadField<int>("reason"); }
        void SetReason(int value) const { WriteField<int>("reason", value); }
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
