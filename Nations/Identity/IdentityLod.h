#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class IdentityLod : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IdentityLod(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "IdentityLod") {}
    public:
        void Mismatch(const char* what) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(what ? what : "") : nullptr; void* __callArgs[] = { managed_0 }; CallStatic("Mismatch", __callArgs, 1); }
        void Error(const char* what) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(what ? what : "") : nullptr; void* __callArgs[] = { managed_0 }; CallStatic("Error", __callArgs, 1); }
        void SetAll(bool on) const { void* __callArgs[] = { &on }; CallStatic("SetAll", __callArgs, 1); }
        bool RescanSkip() const { return ReadStaticField<bool>("RescanSkip"); }
        void RescanSkip(bool value) const { WriteStaticField<bool>("RescanSkip", value); }
        bool RescanOcean() const { return ReadStaticField<bool>("RescanOcean"); }
        void RescanOcean(bool value) const { WriteStaticField<bool>("RescanOcean", value); }
        float DriftScale() const { return ReadStaticField<float>("DriftScale"); }
        void DriftScale(float value) const { WriteStaticField<float>("DriftScale", value); }
        bool FoundingOwnedChunks() const { return ReadStaticField<bool>("FoundingOwnedChunks"); }
        void FoundingOwnedChunks(bool value) const { WriteStaticField<bool>("FoundingOwnedChunks", value); }
        bool Intern() const { return ReadStaticField<bool>("Intern"); }
        void Intern(bool value) const { WriteStaticField<bool>("Intern", value); }
        int MaintainChunksPerTick() const { return ReadStaticField<int>("MaintainChunksPerTick"); }
        void MaintainChunksPerTick(int value) const { WriteStaticField<int>("MaintainChunksPerTick", value); }
        bool Validate() const { return ReadStaticField<bool>("Validate"); }
        void Validate(bool value) const { WriteStaticField<bool>("Validate", value); }
        bool Shadow() const { return ReadStaticField<bool>("Shadow"); }
        void Shadow(bool value) const { WriteStaticField<bool>("Shadow", value); }
        void* OnMismatch() const { return ReadStaticField<void*>("OnMismatch"); }
        void OnMismatch(void* value) const { WriteStaticField<void*>("OnMismatch", value); }
        int Mismatches() const { return ReadStaticField<int>("Mismatches"); }
        void Mismatches(int value) const { WriteStaticField<int>("Mismatches", value); }
        int64_t RescanChunksSkipped() const { return ReadStaticField<int64_t>("RescanChunksSkipped"); }
        void RescanChunksSkipped(int64_t value) const { WriteStaticField<int64_t>("RescanChunksSkipped", value); }
        int64_t RescanChunksWalked() const { return ReadStaticField<int64_t>("RescanChunksWalked"); }
        void RescanChunksWalked(int64_t value) const { WriteStaticField<int64_t>("RescanChunksWalked", value); }
        int64_t PagesCollapsed() const { return ReadStaticField<int64_t>("PagesCollapsed"); }
        void PagesCollapsed(int64_t value) const { WriteStaticField<int64_t>("PagesCollapsed", value); }
        int64_t HomelandCollapsed() const { return ReadStaticField<int64_t>("HomelandCollapsed"); }
        void HomelandCollapsed(int64_t value) const { WriteStaticField<int64_t>("HomelandCollapsed", value); }
        int64_t FrontierReleased() const { return ReadStaticField<int64_t>("FrontierReleased"); }
        void FrontierReleased(int64_t value) const { WriteStaticField<int64_t>("FrontierReleased", value); }
        bool FrontierRelease() const { return ReadStaticField<bool>("FrontierRelease"); }
        void FrontierRelease(bool value) const { WriteStaticField<bool>("FrontierRelease", value); }
        bool FoundingTally() const { return ReadStaticField<bool>("FoundingTally"); }
        void FoundingTally(bool value) const { WriteStaticField<bool>("FoundingTally", value); }
        bool KernelTrims() const { return ReadStaticField<bool>("KernelTrims"); }
        void KernelTrims(bool value) const { WriteStaticField<bool>("KernelTrims", value); }
        int KernelThreads() const { return ReadStaticField<int>("KernelThreads"); }
        void KernelThreads(int value) const { WriteStaticField<int>("KernelThreads", value); }
        bool KernelParallelFailed() const { return ReadStaticField<bool>("KernelParallelFailed"); }
        void KernelParallelFailed(bool value) const { WriteStaticField<bool>("KernelParallelFailed", value); }
        bool KernelOrdered() const { return ReadStaticField<bool>("KernelOrdered"); }
        void KernelOrdered(bool value) const { WriteStaticField<bool>("KernelOrdered", value); }
        int KernelBatch() const { return ReadStaticField<int>("KernelBatch"); }
        void KernelBatch(int value) const { WriteStaticField<int>("KernelBatch", value); }
        int KernelBatchMin() const { return ReadStaticField<int>("KernelBatchMin"); }
        void KernelBatchMin(int value) const { WriteStaticField<int>("KernelBatchMin", value); }
        void* OnError() const { return ReadStaticField<void*>("OnError"); }
        void OnError(void* value) const { WriteStaticField<void*>("OnError", value); }
        int64_t StageRescanTicks() const { return ReadStaticField<int64_t>("StageRescanTicks"); }
        void StageRescanTicks(int64_t value) const { WriteStaticField<int64_t>("StageRescanTicks", value); }
        int64_t StageEventTicks() const { return ReadStaticField<int64_t>("StageEventTicks"); }
        void StageEventTicks(int64_t value) const { WriteStaticField<int64_t>("StageEventTicks", value); }
        int64_t StageMaintainTicks() const { return ReadStaticField<int64_t>("StageMaintainTicks"); }
        void StageMaintainTicks(int64_t value) const { WriteStaticField<int64_t>("StageMaintainTicks", value); }
        int StageRescansWalked() const { return ReadStaticField<int>("StageRescansWalked"); }
        void StageRescansWalked(int value) const { WriteStaticField<int>("StageRescansWalked", value); }
        int StageRescansSkipped() const { return ReadStaticField<int>("StageRescansSkipped"); }
        void StageRescansSkipped(int value) const { WriteStaticField<int>("StageRescansSkipped", value); }
        int64_t StageNoopEvents() const { return ReadStaticField<int64_t>("StageNoopEvents"); }
        void StageNoopEvents(int64_t value) const { WriteStaticField<int64_t>("StageNoopEvents", value); }
        int64_t StageEventBatches() const { return ReadStaticField<int64_t>("StageEventBatches"); }
        void StageEventBatches(int64_t value) const { WriteStaticField<int64_t>("StageEventBatches", value); }
        int64_t StagePhaseTicks() const { return ReadStaticField<int64_t>("StagePhaseTicks"); }
        void StagePhaseTicks(int64_t value) const { WriteStaticField<int64_t>("StagePhaseTicks", value); }
        int64_t StageBatchTicks() const { return ReadStaticField<int64_t>("StageBatchTicks"); }
        void StageBatchTicks(int64_t value) const { WriteStaticField<int64_t>("StageBatchTicks", value); }
        int64_t StageMergeTicks() const { return ReadStaticField<int64_t>("StageMergeTicks"); }
        void StageMergeTicks(int64_t value) const { WriteStaticField<int64_t>("StageMergeTicks", value); }
    };
}
