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
        bool BlockEmpty(int bx, int by) const { void* __callArgs[] = { &bx, &by }; return CallValue<bool>("BlockEmpty", __callArgs, 2); }
        void* Get(int x, int y) const { void* __callArgs[] = { &x, &y }; return Call("Get", __callArgs, 2); }
        void* GetIndex(int index) const { void* __callArgs[] = { &index }; return Call("GetIndex", __callArgs, 1); }
        void Set(int x, int y, void* c) const { void* __callArgs[] = { &x, &y, c }; Call("Set", __callArgs, 3); }
        void SetIndex(int index, void* c) const { void* __callArgs[] = { &index, c }; Call("SetIndex", __callArgs, 2); }
        void CopyRow(int x0, int y, int length, void* dst, int dstIndex) const { void* __callArgs[] = { &x0, &y, &length, dst, &dstIndex }; Call("CopyRow", __callArgs, 5); }
        int Shift() const { return ReadStaticField<int>("Shift"); }
        int Size() const { return ReadStaticField<int>("Size"); }
    };
}
