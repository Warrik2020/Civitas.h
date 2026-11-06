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
        void label(void* value) const { WriteField<void*>("label", value); }
        void* reason() const { return ReadField<void*>("reason"); }
        void reason(void* value) const { WriteField<void*>("reason", value); }
        void* tipTitle() const { return ReadField<void*>("tipTitle"); }
        void tipTitle(void* value) const { WriteField<void*>("tipTitle", value); }
        void* tipBody() const { return ReadField<void*>("tipBody"); }
        void tipBody(void* value) const { WriteField<void*>("tipBody", value); }
        void* cost() const { return ReadField<void*>("cost"); }
        void cost(void* value) const { WriteField<void*>("cost", value); }
        bool enabled() const { return ReadField<bool>("enabled"); }
        void enabled(bool value) const { WriteField<bool>("enabled", value); }
        bool lit() const { return ReadField<bool>("lit"); }
        void lit(bool value) const { WriteField<bool>("lit", value); }
        bool danger() const { return ReadField<bool>("danger"); }
        void danger(bool value) const { WriteField<bool>("danger", value); }
        bool confirm() const { return ReadField<bool>("confirm"); }
        void confirm(bool value) const { WriteField<bool>("confirm", value); }
    };
}
