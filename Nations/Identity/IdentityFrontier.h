#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class IdentityFrontier : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IdentityFrontier(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "IdentityFrontier") {}
    public:
        int LiveChunkAt(int i) const { void* __callArgs[] = { &i }; return CallValue<int>("LiveChunkAt", __callArgs, 1); }
        int ContactCount(int chunk) const { void* __callArgs[] = { &chunk }; return CallValue<int>("ContactCount", __callArgs, 1); }
        int ContactAt(int chunk, int i) const { void* __callArgs[] = { &chunk, &i }; return CallValue<int>("ContactAt", __callArgs, 2); }
        int CopyLive(void* dst) const { void* __callArgs[] = { &dst }; return CallValue<int>("CopyLive", __callArgs, 1); }
        int ClassOf(int chunk, int off) const { void* __callArgs[] = { &chunk, &off }; return CallValue<int>("ClassOf", __callArgs, 2); }
        void Set(int chunk, int off, int cls) const { void* __callArgs[] = { &chunk, &off, &cls }; Call("Set", __callArgs, 3); }
        int Pick(int chunk, uint32_t r) const { void* __callArgs[] = { &chunk, &r }; return CallValue<int>("Pick", __callArgs, 2); }
        int SetLocal(int chunk, int off, int cls, int& count) const { void* __callArgs[] = { &chunk, &off, &cls, &count }; return CallValue<int>("SetLocal", __callArgs, 4); }
        int Pick(int chunk, int count, uint32_t r) const { void* __callArgs[] = { &chunk, &count, &r }; return CallValue<int>("Pick", __callArgs, 3); }
        void StoreCount(int chunk, int count) const { void* __callArgs[] = { &chunk, &count }; Call("StoreCount", __callArgs, 2); }
        void AddTotal(int delta) const { void* __callArgs[] = { &delta }; Call("AddTotal", __callArgs, 1); }
        void ApplyLiveTransition(int chunk, bool live) const { void* __callArgs[] = { &chunk, &live }; Call("ApplyLiveTransition", __callArgs, 2); }
        bool ReleaseIfEmpty(int chunk) const { void* __callArgs[] = { &chunk }; return CallValue<bool>("ReleaseIfEmpty", __callArgs, 1); }
        void EnqueueRescan(int chunk) const { void* __callArgs[] = { &chunk }; Call("EnqueueRescan", __callArgs, 1); }
        bool TryDequeueRescan(int& chunk) const { void* __callArgs[] = { &chunk }; return CallValue<bool>("TryDequeueRescan", __callArgs, 1); }
        bool IsQueued(int chunk) const { void* __callArgs[] = { &chunk }; return CallValue<bool>("IsQueued", __callArgs, 1); }
        int None() const { return ReadStaticField<int>("None"); }
        int Contact() const { return ReadStaticField<int>("Contact"); }
    };
}
