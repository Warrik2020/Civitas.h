#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class TickSubscriber : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TickSubscriber(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "TickSubscriber") {}
    public:
        bool Matches(void* d) const { void* __callArgs[] = { d }; return CallValue<bool>("Matches", __callArgs, 1); }
        void* Plain() const { return ReadField<void*>("Plain"); }
        void Plain(void* value) const { WriteField<void*>("Plain", value); }
        void* Steps() const { return ReadField<void*>("Steps"); }
        void Steps(void* value) const { WriteField<void*>("Steps", value); }
        void* Phase() const { return ReadField<void*>("Phase"); }
        void Phase(void* value) const { WriteField<void*>("Phase", value); }
    };
}
