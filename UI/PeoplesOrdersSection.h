#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class PeoplesOrdersSection : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeoplesOrdersSection(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "PeoplesOrdersSection") {}
    public:
        bool Refresh(void* c) const { void* args[] = { &c }; return CallValue<bool>("Refresh", args, 1); }
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* chip() const { return ReadField<void*>("chip"); }
        void SetChip(void* value) const { WriteField<void*>("chip", value); }
        void* text() const { return ReadField<void*>("text"); }
        void SetText(void* value) const { WriteField<void*>("text", value); }
        void* status() const { return ReadField<void*>("status"); }
        void SetStatus(void* value) const { WriteField<void*>("status", value); }
    };
}
