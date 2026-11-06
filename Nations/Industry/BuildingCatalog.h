#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Industry
{
    class BuildingCatalog : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BuildingCatalog(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Industry", "BuildingCatalog") {}
    public:
        void* Get(int t) const { void* __callArgs[] = { &t }; return CallStatic("Get", __callArgs, 1); }
        int CategoryOf(int t) const { void* __callArgs[] = { &t }; return CallStaticValue<int>("CategoryOf", __callArgs, 1); }
        bool Placeable(int t) const { void* __callArgs[] = { &t }; return CallStaticValue<bool>("Placeable", __callArgs, 1); }
        void* DisplayName(int t) const { void* __callArgs[] = { &t }; return CallStatic("DisplayName", __callArgs, 1); }
        bool UnlockedBy(int techIndex, int& type) const { void* __callArgs[] = { &techIndex, &type }; return CallStaticValue<bool>("UnlockedBy", __callArgs, 2); }
        bool Offered(int t) const { void* __callArgs[] = { &t }; return CallStaticValue<bool>("Offered", __callArgs, 1); }
        void* All() const { return ReadStaticField<void*>("All"); }
    };
}
