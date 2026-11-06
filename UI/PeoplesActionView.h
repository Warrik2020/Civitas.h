#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class PeoplesActionView : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeoplesActionView(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "PeoplesActionView") {}
    public:
        void* label() const { return ReadField<void*>("label"); }
        void SetLabel(void* value) const { WriteField<void*>("label", value); }
        void* reason() const { return ReadField<void*>("reason"); }
        void SetReason(void* value) const { WriteField<void*>("reason", value); }
        void* tipTitle() const { return ReadField<void*>("tipTitle"); }
        void SetTipTitle(void* value) const { WriteField<void*>("tipTitle", value); }
        void* tipBody() const { return ReadField<void*>("tipBody"); }
        void SetTipBody(void* value) const { WriteField<void*>("tipBody", value); }
        void* cost() const { return ReadField<void*>("cost"); }
        void SetCost(void* value) const { WriteField<void*>("cost", value); }
        bool enabled() const { return ReadField<bool>("enabled"); }
        void SetEnabled(bool value) const { WriteField<bool>("enabled", value); }
        bool lit() const { return ReadField<bool>("lit"); }
        void SetLit(bool value) const { WriteField<bool>("lit", value); }
        bool danger() const { return ReadField<bool>("danger"); }
        void SetDanger(bool value) const { WriteField<bool>("danger", value); }
        bool confirm() const { return ReadField<bool>("confirm"); }
        void SetConfirm(bool value) const { WriteField<bool>("confirm", value); }
    };
}
