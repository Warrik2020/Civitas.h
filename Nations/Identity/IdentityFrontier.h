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
        int LiveChunkAt(int i) const { void* args[] = { &i }; return CallValue<int>("LiveChunkAt", args, 1); }
        int ContactCount(int chunk) const { void* args[] = { &chunk }; return CallValue<int>("ContactCount", args, 1); }
        int ContactAt(int chunk, int i) const { void* args[] = { &chunk, &i }; return CallValue<int>("ContactAt", args, 2); }
        int CopyLive(void* dst) const { void* args[] = { &dst }; return CallValue<int>("CopyLive", args, 1); }
        int ClassOf(int chunk, int off) const { void* args[] = { &chunk, &off }; return CallValue<int>("ClassOf", args, 2); }
        void Set(int chunk, int off, int cls) const { void* args[] = { &chunk, &off, &cls }; Call("Set", args, 3); }
        int Pick(int chunk, uint32_t r) const { void* args[] = { &chunk, &r }; return CallValue<int>("Pick", args, 2); }
        int SetLocal(int chunk, int off, int cls, int& count) const { void* args[] = { &chunk, &off, &cls, &count }; return CallValue<int>("SetLocal", args, 4); }
        int Pick(int chunk, int count, uint32_t r) const { void* args[] = { &chunk, &count, &r }; return CallValue<int>("Pick", args, 3); }
        void StoreCount(int chunk, int count) const { void* args[] = { &chunk, &count }; Call("StoreCount", args, 2); }
        void AddTotal(int delta) const { void* args[] = { &delta }; Call("AddTotal", args, 1); }
        void ApplyLiveTransition(int chunk, bool live) const { void* args[] = { &chunk, &live }; Call("ApplyLiveTransition", args, 2); }
        bool ReleaseIfEmpty(int chunk) const { void* args[] = { &chunk }; return CallValue<bool>("ReleaseIfEmpty", args, 1); }
        void EnqueueRescan(int chunk) const { void* args[] = { &chunk }; Call("EnqueueRescan", args, 1); }
        bool TryDequeueRescan(int& chunk) const { void* args[] = { &chunk }; return CallValue<bool>("TryDequeueRescan", args, 1); }
        bool IsQueued(int chunk) const { void* args[] = { &chunk }; return CallValue<bool>("IsQueued", args, 1); }
        int None() const { return ReadStaticField<int>("None"); }
        int Contact() const { return ReadStaticField<int>("Contact"); }
    };
}
