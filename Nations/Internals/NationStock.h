#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class NationStock : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationStock(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "NationStock") {}
    public:
        void Clear() const { Call("Clear", nullptr, 0); }
        void* buckets() const { return ReadField<void*>("buckets"); }
        void* captured() const { return ReadField<void*>("captured"); }
        void* plain() const { return ReadField<void*>("plain"); }
    };
}
