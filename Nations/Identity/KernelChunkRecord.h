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
        void chunk(int value) const { WriteField<int>("chunk", value); }
        bool started() const { return ReadField<bool>("started"); }
        void started(bool value) const { WriteField<bool>("started", value); }
        void* log() const { return ReadField<void*>("log"); }
        void log(void* value) const { WriteField<void*>("log", value); }
        int opStart() const { return ReadField<int>("opStart"); }
        void opStart(int value) const { WriteField<int>("opStart", value); }
        int opEnd() const { return ReadField<int>("opEnd"); }
        void opEnd(int value) const { WriteField<int>("opEnd", value); }
        int flipStart() const { return ReadField<int>("flipStart"); }
        void flipStart(int value) const { WriteField<int>("flipStart", value); }
        int flipEnd() const { return ReadField<int>("flipEnd"); }
        void flipEnd(int value) const { WriteField<int>("flipEnd", value); }
        int homeStart() const { return ReadField<int>("homeStart"); }
        void homeStart(int value) const { WriteField<int>("homeStart", value); }
        int homeEnd() const { return ReadField<int>("homeEnd"); }
        void homeEnd(int value) const { WriteField<int>("homeEnd", value); }
        int massStart() const { return ReadField<int>("massStart"); }
        void massStart(int value) const { WriteField<int>("massStart", value); }
        int massEnd() const { return ReadField<int>("massEnd"); }
        void massEnd(int value) const { WriteField<int>("massEnd", value); }
        int dirtyAt() const { return ReadField<int>("dirtyAt"); }
        void dirtyAt(int value) const { WriteField<int>("dirtyAt", value); }
        int totalContactDelta() const { return ReadField<int>("totalContactDelta"); }
        void totalContactDelta(int value) const { WriteField<int>("totalContactDelta", value); }
        int events() const { return ReadField<int>("events"); }
        void events(int value) const { WriteField<int>("events", value); }
        int flipsCounted() const { return ReadField<int>("flipsCounted"); }
        void flipsCounted(int value) const { WriteField<int>("flipsCounted", value); }
        int noops() const { return ReadField<int>("noops"); }
        void noops(int value) const { WriteField<int>("noops", value); }
        int pushEvents() const { return ReadField<int>("pushEvents"); }
        void pushEvents(int value) const { WriteField<int>("pushEvents", value); }
    };
}
