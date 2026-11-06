#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering
{
    class BlockPixels : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BlockPixels(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering", "BlockPixels") {}
    public:
        bool BlockEmpty(int bx, int by) const { void* args[] = { &bx, &by }; return CallValue<bool>("BlockEmpty", args, 2); }
        void* Get(int x, int y) const { void* args[] = { &x, &y }; return Call("Get", args, 2); }
        void* GetIndex(int index) const { void* args[] = { &index }; return Call("GetIndex", args, 1); }
        void Set(int x, int y, void* c) const { void* args[] = { &x, &y, c }; Call("Set", args, 3); }
        void SetIndex(int index, void* c) const { void* args[] = { &index, c }; Call("SetIndex", args, 2); }
        void CopyRow(int x0, int y, int length, void* dst, int dstIndex) const { void* args[] = { &x0, &y, &length, dst, &dstIndex }; Call("CopyRow", args, 5); }
        int Shift() const { return ReadStaticField<int>("Shift"); }
        int Size() const { return ReadStaticField<int>("Size"); }
    };
}
