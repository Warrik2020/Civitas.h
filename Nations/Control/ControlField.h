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
        int LapsedInChunk(int chunk) const { void* args[] = { &chunk }; return CallStaticValue<int>("LapsedInChunk", args, 1); }
        int NonzeroInChunk(int chunk) const { void* args[] = { &chunk }; return CallStaticValue<int>("NonzeroInChunk", args, 1); }
        bool QuietAround(int cx, int cy) const { void* args[] = { &cx, &cy }; return CallStaticValue<bool>("QuietAround", args, 2); }
        int RecountNonzero(int chunk) const { void* args[] = { &chunk }; return CallStaticValue<int>("RecountNonzero", args, 1); }
        int RecountChunk(int chunk) const { void* args[] = { &chunk }; return CallStaticValue<int>("RecountChunk", args, 1); }
        bool Ensure(void* grid) const { void* args[] = { grid }; return CallStaticValue<bool>("Ensure", args, 1); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        uint8_t Get(int tile) const { void* args[] = { &tile }; return CallStaticValue<uint8_t>("Get", args, 1); }
        void Set(int tile, uint8_t value) const { void* args[] = { &tile, &value }; CallStatic("Set", args, 2); }
        void* ActiveFor(int nationId) const { void* args[] = { &nationId }; return CallStatic("ActiveFor", args, 1); }
        void ActivateTile(int nationId, int tile) const { void* args[] = { &nationId, &tile }; CallStatic("ActivateTile", args, 2); }
        void OnTileChanged(int nationId, int tile) const { void* args[] = { &nationId, &tile }; CallStatic("OnTileChanged", args, 2); }
        void RebuildAfterLoad() const { CallStatic("RebuildAfterLoad", nullptr, 0); }
        uint8_t LapsedAt() const { return ReadStaticField<uint8_t>("LapsedAt"); }
        void* LapsedTiles() const { return ReadStaticField<void*>("LapsedTiles"); }
    };
}
