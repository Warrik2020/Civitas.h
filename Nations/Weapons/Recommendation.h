#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class Recommendation : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Recommendation(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "Recommendation") {}
    public:
        void* edit() const { return ReadField<void*>("edit"); }
        void SetEdit(void* value) const { WriteField<void*>("edit", value); }
        void* text() const { return ReadField<void*>("text"); }
        void SetText(void* value) const { WriteField<void*>("text", value); }
    };
}
