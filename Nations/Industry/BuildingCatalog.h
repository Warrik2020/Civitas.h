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
        void* Get(int t) const { void* args[] = { &t }; return CallStatic("Get", args, 1); }
        int CategoryOf(int t) const { void* args[] = { &t }; return CallStaticValue<int>("CategoryOf", args, 1); }
        bool Placeable(int t) const { void* args[] = { &t }; return CallStaticValue<bool>("Placeable", args, 1); }
        void* DisplayName(int t) const { void* args[] = { &t }; return CallStatic("DisplayName", args, 1); }
        bool UnlockedBy(int techIndex, int& type) const { void* args[] = { &techIndex, &type }; return CallStaticValue<bool>("UnlockedBy", args, 2); }
        bool Offered(int t) const { void* args[] = { &t }; return CallStaticValue<bool>("Offered", args, 1); }
        void* All() const { return ReadStaticField<void*>("All"); }
    };
}
