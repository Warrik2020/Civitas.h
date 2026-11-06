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
        int ChunkOf(int x, int y) const { void* args[] = { &x, &y }; return CallValue<int>("ChunkOf", args, 2); }
        int Offset(int x, int y) const { void* args[] = { &x, &y }; return CallStaticValue<int>("Offset", args, 2); }
        void* ReadPage(int chunk) const { void* args[] = { &chunk }; return Call("ReadPage", args, 1); }
        void* WritablePage(int chunk) const { void* args[] = { &chunk }; return Call("WritablePage", args, 1); }
        bool IsShared(int chunk) const { void* args[] = { &chunk }; return CallValue<bool>("IsShared", args, 1); }
        bool TryCollapse(int chunk) const { void* args[] = { &chunk }; return CallValue<bool>("TryCollapse", args, 1); }
        void ExpandAll() const { Call("ExpandAll", nullptr, 0); }
        int VerifyInterning(void* report) const { void* args[] = { report }; return CallValue<int>("VerifyInterning", args, 1); }
        void* Get(int x, int y) const { void* args[] = { &x, &y }; return Call("Get", args, 2); }
        void* GetAt(int tileIndex) const { void* args[] = { &tileIndex }; return Call("GetAt", args, 1); }
        void Set(int x, int y, void* v) const { void* args[] = { &x, &y, &v }; Call("Set", args, 3); }
        bool RegionEmpty(int chunk) const { void* args[] = { &chunk }; return CallValue<bool>("RegionEmpty", args, 1); }
        int Shift() const { return ReadStaticField<int>("Shift"); }
        int Size() const { return ReadStaticField<int>("Size"); }
        int PageLen() const { return ReadStaticField<int>("PageLen"); }
        void* page() const { return ReadField<void*>("page"); }
        void SetPage(void* value) const { WriteField<void*>("page", value); }
        int refs() const { return ReadField<int>("refs"); }
        void SetRefs(int value) const { WriteField<int>("refs", value); }
    };
}
