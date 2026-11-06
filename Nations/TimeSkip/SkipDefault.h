#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::TimeSkip
{
    class SkipDefault : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SkipDefault(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.TimeSkip", "SkipDefault") {}
    public:
        int tick() const { return ReadField<int>("tick"); }
        void SetTick(int value) const { WriteField<int>("tick", value); }
        void* text() const { return ReadField<void*>("text"); }
        void SetText(void* value) const { WriteField<void*>("text", value); }
    };
}
