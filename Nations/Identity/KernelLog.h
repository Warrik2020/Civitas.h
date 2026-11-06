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
        void AddOp(int target, int off, int op) const { void* args[] = { &target, &off, &op }; Call("AddOp", args, 3); }
        void AddFlip(int tile, int x, int y, int oldDom, int newDom) const { void* args[] = { &tile, &x, &y, &oldDom, &newDom }; Call("AddFlip", args, 5); }
        void AddHome(int root, int dHome, int dHeld) const { void* args[] = { &root, &dHome, &dHeld }; Call("AddHome", args, 3); }
        void AddMass(int gid, int64_t delta) const { void* args[] = { &gid, &delta }; Call("AddMass", args, 2); }
        int AddDirty(void* mask) const { void* args[] = { mask }; return CallValue<int>("AddDirty", args, 1); }
        int OpSetNone() const { return ReadStaticField<int>("OpSetNone"); }
        int OpSetContact() const { return ReadStaticField<int>("OpSetContact"); }
        int OpOwnLive() const { return ReadStaticField<int>("OpOwnLive"); }
        int OpOwnDead() const { return ReadStaticField<int>("OpOwnDead"); }
        void* ops() const { return ReadField<void*>("ops"); }
        void SetOps(void* value) const { WriteField<void*>("ops", value); }
        int opCount() const { return ReadField<int>("opCount"); }
        void SetOpCount(int value) const { WriteField<int>("opCount", value); }
        void* flips() const { return ReadField<void*>("flips"); }
        void SetFlips(void* value) const { WriteField<void*>("flips", value); }
        int flipCount() const { return ReadField<int>("flipCount"); }
        void SetFlipCount(int value) const { WriteField<int>("flipCount", value); }
        void* home() const { return ReadField<void*>("home"); }
        void SetHome(void* value) const { WriteField<void*>("home", value); }
        int homeCount() const { return ReadField<int>("homeCount"); }
        void SetHomeCount(int value) const { WriteField<int>("homeCount", value); }
        void* massGid() const { return ReadField<void*>("massGid"); }
        void SetMassGid(void* value) const { WriteField<void*>("massGid", value); }
        void* massDelta() const { return ReadField<void*>("massDelta"); }
        void SetMassDelta(void* value) const { WriteField<void*>("massDelta", value); }
        int massCount() const { return ReadField<int>("massCount"); }
        void SetMassCount(int value) const { WriteField<int>("massCount", value); }
        void* dirty() const { return ReadField<void*>("dirty"); }
        void SetDirty(void* value) const { WriteField<void*>("dirty", value); }
        int dirtyCount() const { return ReadField<int>("dirtyCount"); }
        void SetDirtyCount(int value) const { WriteField<int>("dirtyCount", value); }
    };
}
