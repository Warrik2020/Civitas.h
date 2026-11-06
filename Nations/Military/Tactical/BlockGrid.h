#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class BlockGrid : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BlockGrid(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "BlockGrid") {}
    public:
        void Allocate(void* arenaSize, int cap) const { void* __callArgs[] = { arenaSize, &cap }; Call("Allocate", __callArgs, 2); }
        void GrowBlocks(int cap) const { void* __callArgs[] = { &cap }; Call("GrowBlocks", __callArgs, 1); }
        void Dispose() const { Call("Dispose", nullptr, 0); }
        void* cellStart() const { return ReadField<void*>("cellStart"); }
        void cellStart(void* value) const { WriteField<void*>("cellStart", value); }
        void* cursor() const { return ReadField<void*>("cursor"); }
        void cursor(void* value) const { WriteField<void*>("cursor", value); }
        void* items() const { return ReadField<void*>("items"); }
        void items(void* value) const { WriteField<void*>("items", value); }
        void* big() const { return ReadField<void*>("big"); }
        void big(void* value) const { WriteField<void*>("big", value); }
        void* meta() const { return ReadField<void*>("meta"); }
        void meta(void* value) const { WriteField<void*>("meta", value); }
        void* proxy() const { return ReadField<void*>("proxy"); }
        void proxy(void* value) const { WriteField<void*>("proxy", value); }
        float cell() const { return ReadField<float>("cell"); }
        void cell(float value) const { WriteField<float>("cell", value); }
        int wide() const { return ReadField<int>("wide"); }
        void wide(int value) const { WriteField<int>("wide", value); }
        int high() const { return ReadField<int>("high"); }
        void high(int value) const { WriteField<int>("high", value); }
        int blockCap() const { return ReadField<int>("blockCap"); }
        void blockCap(int value) const { WriteField<int>("blockCap", value); }
    };
}
