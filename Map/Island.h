#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Map
{
    class Island : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Island(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map", "Island") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void id(int value) const { WriteField<int>("id", value); }
        int area() const { return ReadField<int>("area"); }
        void area(int value) const { WriteField<int>("area", value); }
        void* outer() const { return ReadField<void*>("outer"); }
        void outer(void* value) const { WriteField<void*>("outer", value); }
        void* holes() const { return ReadField<void*>("holes"); }
        void holes(void* value) const { WriteField<void*>("holes", value); }
    };
}
