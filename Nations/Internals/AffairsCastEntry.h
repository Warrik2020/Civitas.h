#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsCastEntry : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsCastEntry(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsCastEntry") {}
    public:
        void* role() const { return ReadField<void*>("role"); }
        void role(void* value) const { WriteField<void*>("role", value); }
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        int id() const { return ReadField<int>("id"); }
        void id(int value) const { WriteField<int>("id", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        int bornTick() const { return ReadField<int>("bornTick"); }
        void bornTick(int value) const { WriteField<int>("bornTick", value); }
        void* color() const { return ReadField<void*>("color"); }
        void color(void* value) const { WriteField<void*>("color", value); }
    };
}
