#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class KernelLog : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit KernelLog(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "KernelLog") {}
    public:
        void Clear() const { Call("Clear", nullptr, 0); }
        void AddOp(int target, int off, int op) const { void* __callArgs[] = { &target, &off, &op }; Call("AddOp", __callArgs, 3); }
        void AddFlip(int tile, int x, int y, int oldDom, int newDom) const { void* __callArgs[] = { &tile, &x, &y, &oldDom, &newDom }; Call("AddFlip", __callArgs, 5); }
        void AddHome(int root, int dHome, int dHeld) const { void* __callArgs[] = { &root, &dHome, &dHeld }; Call("AddHome", __callArgs, 3); }
        void AddMass(int gid, int64_t delta) const { void* __callArgs[] = { &gid, &delta }; Call("AddMass", __callArgs, 2); }
        int AddDirty(void* mask) const { void* __callArgs[] = { mask }; return CallValue<int>("AddDirty", __callArgs, 1); }
        int OpSetNone() const { return ReadStaticField<int>("OpSetNone"); }
        int OpSetContact() const { return ReadStaticField<int>("OpSetContact"); }
        int OpOwnLive() const { return ReadStaticField<int>("OpOwnLive"); }
        int OpOwnDead() const { return ReadStaticField<int>("OpOwnDead"); }
        void* ops() const { return ReadField<void*>("ops"); }
        void ops(void* value) const { WriteField<void*>("ops", value); }
        int opCount() const { return ReadField<int>("opCount"); }
        void opCount(int value) const { WriteField<int>("opCount", value); }
        void* flips() const { return ReadField<void*>("flips"); }
        void flips(void* value) const { WriteField<void*>("flips", value); }
        int flipCount() const { return ReadField<int>("flipCount"); }
        void flipCount(int value) const { WriteField<int>("flipCount", value); }
        void* home() const { return ReadField<void*>("home"); }
        void home(void* value) const { WriteField<void*>("home", value); }
        int homeCount() const { return ReadField<int>("homeCount"); }
        void homeCount(int value) const { WriteField<int>("homeCount", value); }
        void* massGid() const { return ReadField<void*>("massGid"); }
        void massGid(void* value) const { WriteField<void*>("massGid", value); }
        void* massDelta() const { return ReadField<void*>("massDelta"); }
        void massDelta(void* value) const { WriteField<void*>("massDelta", value); }
        int massCount() const { return ReadField<int>("massCount"); }
        void massCount(int value) const { WriteField<int>("massCount", value); }
        void* dirty() const { return ReadField<void*>("dirty"); }
        void dirty(void* value) const { WriteField<void*>("dirty", value); }
        int dirtyCount() const { return ReadField<int>("dirtyCount"); }
        void dirtyCount(int value) const { WriteField<int>("dirtyCount", value); }
    };
}
