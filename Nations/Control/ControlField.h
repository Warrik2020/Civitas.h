#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Control
{
    class ControlField : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ControlField(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Control", "ControlField") {}
    public:
        int LapsedInChunk(int chunk) const { void* __callArgs[] = { &chunk }; return CallStaticValue<int>("LapsedInChunk", __callArgs, 1); }
        int NonzeroInChunk(int chunk) const { void* __callArgs[] = { &chunk }; return CallStaticValue<int>("NonzeroInChunk", __callArgs, 1); }
        bool QuietAround(int cx, int cy) const { void* __callArgs[] = { &cx, &cy }; return CallStaticValue<bool>("QuietAround", __callArgs, 2); }
        int RecountNonzero(int chunk) const { void* __callArgs[] = { &chunk }; return CallStaticValue<int>("RecountNonzero", __callArgs, 1); }
        int RecountChunk(int chunk) const { void* __callArgs[] = { &chunk }; return CallStaticValue<int>("RecountChunk", __callArgs, 1); }
        bool Ensure(void* grid) const { void* __callArgs[] = { grid }; return CallStaticValue<bool>("Ensure", __callArgs, 1); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        uint8_t Get(int tile) const { void* __callArgs[] = { &tile }; return CallStaticValue<uint8_t>("Get", __callArgs, 1); }
        void Set(int tile, uint8_t value) const { void* __callArgs[] = { &tile, &value }; CallStatic("Set", __callArgs, 2); }
        void* ActiveFor(int nationId) const { void* __callArgs[] = { &nationId }; return CallStatic("ActiveFor", __callArgs, 1); }
        void ActivateTile(int nationId, int tile) const { void* __callArgs[] = { &nationId, &tile }; CallStatic("ActivateTile", __callArgs, 2); }
        void OnTileChanged(int nationId, int tile) const { void* __callArgs[] = { &nationId, &tile }; CallStatic("OnTileChanged", __callArgs, 2); }
        void RebuildAfterLoad() const { CallStatic("RebuildAfterLoad", nullptr, 0); }
        uint8_t LapsedAt() const { return ReadStaticField<uint8_t>("LapsedAt"); }
        void* LapsedTiles() const { return ReadStaticField<void*>("LapsedTiles"); }
    };
}
