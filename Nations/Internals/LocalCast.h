#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class LocalCast : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LocalCast(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "LocalCast") {}
    public:
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        void* color() const { return ReadField<void*>("color"); }
        void color(void* value) const { WriteField<void*>("color", value); }
        int bornTick() const { return ReadField<int>("bornTick"); }
        void bornTick(int value) const { WriteField<int>("bornTick", value); }
    };
}
