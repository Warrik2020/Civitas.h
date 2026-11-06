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
        void SetRole(void* value) const { WriteField<void*>("role", value); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        int bornTick() const { return ReadField<int>("bornTick"); }
        void SetBornTick(int value) const { WriteField<int>("bornTick", value); }
        void* color() const { return ReadField<void*>("color"); }
        void SetColor(void* value) const { WriteField<void*>("color", value); }
    };
}
