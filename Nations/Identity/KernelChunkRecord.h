#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class KernelChunkRecord : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit KernelChunkRecord(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "KernelChunkRecord") {}
    public:
        int chunk() const { return ReadField<int>("chunk"); }
        void SetChunk(int value) const { WriteField<int>("chunk", value); }
        bool started() const { return ReadField<bool>("started"); }
        void SetStarted(bool value) const { WriteField<bool>("started", value); }
        void* log() const { return ReadField<void*>("log"); }
        void SetLog(void* value) const { WriteField<void*>("log", value); }
        int opStart() const { return ReadField<int>("opStart"); }
        void SetOpStart(int value) const { WriteField<int>("opStart", value); }
        int opEnd() const { return ReadField<int>("opEnd"); }
        void SetOpEnd(int value) const { WriteField<int>("opEnd", value); }
        int flipStart() const { return ReadField<int>("flipStart"); }
        void SetFlipStart(int value) const { WriteField<int>("flipStart", value); }
        int flipEnd() const { return ReadField<int>("flipEnd"); }
        void SetFlipEnd(int value) const { WriteField<int>("flipEnd", value); }
        int homeStart() const { return ReadField<int>("homeStart"); }
        void SetHomeStart(int value) const { WriteField<int>("homeStart", value); }
        int homeEnd() const { return ReadField<int>("homeEnd"); }
        void SetHomeEnd(int value) const { WriteField<int>("homeEnd", value); }
        int massStart() const { return ReadField<int>("massStart"); }
        void SetMassStart(int value) const { WriteField<int>("massStart", value); }
        int massEnd() const { return ReadField<int>("massEnd"); }
        void SetMassEnd(int value) const { WriteField<int>("massEnd", value); }
        int dirtyAt() const { return ReadField<int>("dirtyAt"); }
        void SetDirtyAt(int value) const { WriteField<int>("dirtyAt", value); }
        int totalContactDelta() const { return ReadField<int>("totalContactDelta"); }
        void SetTotalContactDelta(int value) const { WriteField<int>("totalContactDelta", value); }
        int events() const { return ReadField<int>("events"); }
        void SetEvents(int value) const { WriteField<int>("events", value); }
        int flipsCounted() const { return ReadField<int>("flipsCounted"); }
        void SetFlipsCounted(int value) const { WriteField<int>("flipsCounted", value); }
        int noops() const { return ReadField<int>("noops"); }
        void SetNoops(int value) const { WriteField<int>("noops", value); }
        int pushEvents() const { return ReadField<int>("pushEvents"); }
        void SetPushEvents(int value) const { WriteField<int>("pushEvents", value); }
    };
}
