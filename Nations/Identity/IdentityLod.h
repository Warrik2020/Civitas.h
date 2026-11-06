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
        void Mismatch(const char* what) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(what ? what : "") : nullptr; void* args[] = { managed_0 }; CallStatic("Mismatch", args, 1); }
        void Error(const char* what) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(what ? what : "") : nullptr; void* args[] = { managed_0 }; CallStatic("Error", args, 1); }
        void SetAll(bool on) const { void* args[] = { &on }; CallStatic("SetAll", args, 1); }
        bool RescanSkip() const { return ReadStaticField<bool>("RescanSkip"); }
        void SetRescanSkip(bool value) const { WriteStaticField<bool>("RescanSkip", value); }
        bool RescanOcean() const { return ReadStaticField<bool>("RescanOcean"); }
        void SetRescanOcean(bool value) const { WriteStaticField<bool>("RescanOcean", value); }
        float DriftScale() const { return ReadStaticField<float>("DriftScale"); }
        void SetDriftScale(float value) const { WriteStaticField<float>("DriftScale", value); }
        bool FoundingOwnedChunks() const { return ReadStaticField<bool>("FoundingOwnedChunks"); }
        void SetFoundingOwnedChunks(bool value) const { WriteStaticField<bool>("FoundingOwnedChunks", value); }
        bool Intern() const { return ReadStaticField<bool>("Intern"); }
        void SetIntern(bool value) const { WriteStaticField<bool>("Intern", value); }
        int MaintainChunksPerTick() const { return ReadStaticField<int>("MaintainChunksPerTick"); }
        void SetMaintainChunksPerTick(int value) const { WriteStaticField<int>("MaintainChunksPerTick", value); }
        bool Validate() const { return ReadStaticField<bool>("Validate"); }
        void SetValidate(bool value) const { WriteStaticField<bool>("Validate", value); }
        bool Shadow() const { return ReadStaticField<bool>("Shadow"); }
        void SetShadow(bool value) const { WriteStaticField<bool>("Shadow", value); }
        void* OnMismatch() const { return ReadStaticField<void*>("OnMismatch"); }
        void SetOnMismatch(void* value) const { WriteStaticField<void*>("OnMismatch", value); }
        int Mismatches() const { return ReadStaticField<int>("Mismatches"); }
        void SetMismatches(int value) const { WriteStaticField<int>("Mismatches", value); }
        int64_t RescanChunksSkipped() const { return ReadStaticField<int64_t>("RescanChunksSkipped"); }
        void SetRescanChunksSkipped(int64_t value) const { WriteStaticField<int64_t>("RescanChunksSkipped", value); }
        int64_t RescanChunksWalked() const { return ReadStaticField<int64_t>("RescanChunksWalked"); }
        void SetRescanChunksWalked(int64_t value) const { WriteStaticField<int64_t>("RescanChunksWalked", value); }
        int64_t PagesCollapsed() const { return ReadStaticField<int64_t>("PagesCollapsed"); }
        void SetPagesCollapsed(int64_t value) const { WriteStaticField<int64_t>("PagesCollapsed", value); }
        int64_t HomelandCollapsed() const { return ReadStaticField<int64_t>("HomelandCollapsed"); }
        void SetHomelandCollapsed(int64_t value) const { WriteStaticField<int64_t>("HomelandCollapsed", value); }
        int64_t FrontierReleased() const { return ReadStaticField<int64_t>("FrontierReleased"); }
        void SetFrontierReleased(int64_t value) const { WriteStaticField<int64_t>("FrontierReleased", value); }
        bool FrontierRelease() const { return ReadStaticField<bool>("FrontierRelease"); }
        void SetFrontierRelease(bool value) const { WriteStaticField<bool>("FrontierRelease", value); }
        bool FoundingTally() const { return ReadStaticField<bool>("FoundingTally"); }
        void SetFoundingTally(bool value) const { WriteStaticField<bool>("FoundingTally", value); }
        bool KernelTrims() const { return ReadStaticField<bool>("KernelTrims"); }
        void SetKernelTrims(bool value) const { WriteStaticField<bool>("KernelTrims", value); }
        int KernelThreads() const { return ReadStaticField<int>("KernelThreads"); }
        void SetKernelThreads(int value) const { WriteStaticField<int>("KernelThreads", value); }
        bool KernelParallelFailed() const { return ReadStaticField<bool>("KernelParallelFailed"); }
        void SetKernelParallelFailed(bool value) const { WriteStaticField<bool>("KernelParallelFailed", value); }
        bool KernelOrdered() const { return ReadStaticField<bool>("KernelOrdered"); }
        void SetKernelOrdered(bool value) const { WriteStaticField<bool>("KernelOrdered", value); }
        int KernelBatch() const { return ReadStaticField<int>("KernelBatch"); }
        void SetKernelBatch(int value) const { WriteStaticField<int>("KernelBatch", value); }
        int KernelBatchMin() const { return ReadStaticField<int>("KernelBatchMin"); }
        void SetKernelBatchMin(int value) const { WriteStaticField<int>("KernelBatchMin", value); }
        void* OnError() const { return ReadStaticField<void*>("OnError"); }
        void SetOnError(void* value) const { WriteStaticField<void*>("OnError", value); }
        int64_t StageRescanTicks() const { return ReadStaticField<int64_t>("StageRescanTicks"); }
        void SetStageRescanTicks(int64_t value) const { WriteStaticField<int64_t>("StageRescanTicks", value); }
        int64_t StageEventTicks() const { return ReadStaticField<int64_t>("StageEventTicks"); }
        void SetStageEventTicks(int64_t value) const { WriteStaticField<int64_t>("StageEventTicks", value); }
        int64_t StageMaintainTicks() const { return ReadStaticField<int64_t>("StageMaintainTicks"); }
        void SetStageMaintainTicks(int64_t value) const { WriteStaticField<int64_t>("StageMaintainTicks", value); }
        int StageRescansWalked() const { return ReadStaticField<int>("StageRescansWalked"); }
        void SetStageRescansWalked(int value) const { WriteStaticField<int>("StageRescansWalked", value); }
        int StageRescansSkipped() const { return ReadStaticField<int>("StageRescansSkipped"); }
        void SetStageRescansSkipped(int value) const { WriteStaticField<int>("StageRescansSkipped", value); }
        int64_t StageNoopEvents() const { return ReadStaticField<int64_t>("StageNoopEvents"); }
        void SetStageNoopEvents(int64_t value) const { WriteStaticField<int64_t>("StageNoopEvents", value); }
        int64_t StageEventBatches() const { return ReadStaticField<int64_t>("StageEventBatches"); }
        void SetStageEventBatches(int64_t value) const { WriteStaticField<int64_t>("StageEventBatches", value); }
        int64_t StagePhaseTicks() const { return ReadStaticField<int64_t>("StagePhaseTicks"); }
        void SetStagePhaseTicks(int64_t value) const { WriteStaticField<int64_t>("StagePhaseTicks", value); }
        int64_t StageBatchTicks() const { return ReadStaticField<int64_t>("StageBatchTicks"); }
        void SetStageBatchTicks(int64_t value) const { WriteStaticField<int64_t>("StageBatchTicks", value); }
        int64_t StageMergeTicks() const { return ReadStaticField<int64_t>("StageMergeTicks"); }
        void SetStageMergeTicks(int64_t value) const { WriteStaticField<int64_t>("StageMergeTicks", value); }
    };
}
