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
        void Allocate(void* arenaSize, int cap) const { void* args[] = { arenaSize, &cap }; Call("Allocate", args, 2); }
        void GrowBlocks(int cap) const { void* args[] = { &cap }; Call("GrowBlocks", args, 1); }
        void Dispose() const { Call("Dispose", nullptr, 0); }
        void* cellStart() const { return ReadField<void*>("cellStart"); }
        void SetCellStart(void* value) const { WriteField<void*>("cellStart", value); }
        void* cursor() const { return ReadField<void*>("cursor"); }
        void SetCursor(void* value) const { WriteField<void*>("cursor", value); }
        void* items() const { return ReadField<void*>("items"); }
        void SetItems(void* value) const { WriteField<void*>("items", value); }
        void* big() const { return ReadField<void*>("big"); }
        void SetBig(void* value) const { WriteField<void*>("big", value); }
        void* meta() const { return ReadField<void*>("meta"); }
        void SetMeta(void* value) const { WriteField<void*>("meta", value); }
        void* proxy() const { return ReadField<void*>("proxy"); }
        void SetProxy(void* value) const { WriteField<void*>("proxy", value); }
        float cell() const { return ReadField<float>("cell"); }
        void SetCell(float value) const { WriteField<float>("cell", value); }
        int wide() const { return ReadField<int>("wide"); }
        void SetWide(int value) const { WriteField<int>("wide", value); }
        int high() const { return ReadField<int>("high"); }
        void SetHigh(int value) const { WriteField<int>("high", value); }
        int blockCap() const { return ReadField<int>("blockCap"); }
        void SetBlockCap(int value) const { WriteField<int>("blockCap", value); }
    };
}
