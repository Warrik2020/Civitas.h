#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class IdentityAxisRuntime : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IdentityAxisRuntime(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "IdentityAxisRuntime") {}
    public:
        void MarkTileDirty(int tileIndex) const { void* args[] = { &tileIndex }; Call("MarkTileDirty", args, 1); }
        void* mix() const { return ReadField<void*>("mix"); }
        void* homeland() const { return ReadField<void*>("homeland"); }
        void* frontier() const { return ReadField<void*>("frontier"); }
        void* renderDirty() const { return ReadField<void*>("renderDirty"); }
        void* borderDirty() const { return ReadField<void*>("borderDirty"); }
        void* groups() const { return ReadField<void*>("groups"); }
        int sweepsClosed() const { return ReadField<int>("sweepsClosed"); }
        void SetSweepsClosed(int value) const { WriteField<int>("sweepsClosed", value); }
        bool pendingPublish() const { return ReadField<bool>("pendingPublish"); }
        void SetPendingPublish(bool value) const { WriteField<bool>("pendingPublish", value); }
        void* pushes() const { return ReadField<void*>("pushes"); }
        int lastEvents() const { return ReadField<int>("lastEvents"); }
        void SetLastEvents(int value) const { WriteField<int>("lastEvents", value); }
        int lastFlips() const { return ReadField<int>("lastFlips"); }
        void SetLastFlips(int value) const { WriteField<int>("lastFlips", value); }
        int lastPushEvents() const { return ReadField<int>("lastPushEvents"); }
        void SetLastPushEvents(int value) const { WriteField<int>("lastPushEvents", value); }
        int maintainCursor() const { return ReadField<int>("maintainCursor"); }
        void SetMaintainCursor(int value) const { WriteField<int>("maintainCursor", value); }
        int maintainTicks() const { return ReadField<int>("maintainTicks"); }
        void SetMaintainTicks(int value) const { WriteField<int>("maintainTicks", value); }
        void* tileDirty() const { return ReadField<void*>("tileDirty"); }
    };
}
