#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class IdentityMixField : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IdentityMixField(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "IdentityMixField") {}
    public:
        int ChunkOf(int x, int y) const { void* __callArgs[] = { &x, &y }; return CallValue<int>("ChunkOf", __callArgs, 2); }
        int Offset(int x, int y) const { void* __callArgs[] = { &x, &y }; return CallStaticValue<int>("Offset", __callArgs, 2); }
        void* ReadPage(int chunk) const { void* __callArgs[] = { &chunk }; return Call("ReadPage", __callArgs, 1); }
        void* WritablePage(int chunk) const { void* __callArgs[] = { &chunk }; return Call("WritablePage", __callArgs, 1); }
        bool IsShared(int chunk) const { void* __callArgs[] = { &chunk }; return CallValue<bool>("IsShared", __callArgs, 1); }
        bool TryCollapse(int chunk) const { void* __callArgs[] = { &chunk }; return CallValue<bool>("TryCollapse", __callArgs, 1); }
        void ExpandAll() const { Call("ExpandAll", nullptr, 0); }
        int VerifyInterning(void* report) const { void* __callArgs[] = { report }; return CallValue<int>("VerifyInterning", __callArgs, 1); }
        void* Get(int x, int y) const { void* __callArgs[] = { &x, &y }; return Call("Get", __callArgs, 2); }
        void* GetAt(int tileIndex) const { void* __callArgs[] = { &tileIndex }; return Call("GetAt", __callArgs, 1); }
        void Set(int x, int y, void* v) const { void* __callArgs[] = { &x, &y, &v }; Call("Set", __callArgs, 3); }
        bool RegionEmpty(int chunk) const { void* __callArgs[] = { &chunk }; return CallValue<bool>("RegionEmpty", __callArgs, 1); }
        int Shift() const { return ReadStaticField<int>("Shift"); }
        int Size() const { return ReadStaticField<int>("Size"); }
        int PageLen() const { return ReadStaticField<int>("PageLen"); }
    };
}
