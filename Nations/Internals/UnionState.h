#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class UnionState : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnionState(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "UnionState") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int seniorId() const { return ReadField<int>("seniorId"); }
        void SetSeniorId(int value) const { WriteField<int>("seniorId", value); }
        void* members() const { return ReadField<void*>("members"); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* color() const { return ReadField<void*>("color"); }
        void SetColor(void* value) const { WriteField<void*>("color", value); }
        int foundedTick() const { return ReadField<int>("foundedTick"); }
        void SetFoundedTick(int value) const { WriteField<int>("foundedTick", value); }
    };
}
