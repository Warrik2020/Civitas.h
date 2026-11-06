#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Industry
{
    class FortField : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FortField(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Industry", "FortField") {}
    public:
        uint8_t LevelUnder(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<uint8_t>("LevelUnder", __callArgs, 1); }
        void* Level() const { return ReadStaticField<void*>("Level"); }
        void Level(void* value) const { WriteStaticField<void*>("Level", value); }
        void* Grid() const { return ReadStaticField<void*>("Grid"); }
        void Grid(void* value) const { WriteStaticField<void*>("Grid", value); }
    };
}
