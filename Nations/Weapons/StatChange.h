#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class StatChange : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit StatChange(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "StatChange") {}
    public:
        void* label() const { return ReadField<void*>("label"); }
        void SetLabel(void* value) const { WriteField<void*>("label", value); }
        void* text() const { return ReadField<void*>("text"); }
        void SetText(void* value) const { WriteField<void*>("text", value); }
        bool good() const { return ReadField<bool>("good"); }
        void SetGood(bool value) const { WriteField<bool>("good", value); }
    };
}
