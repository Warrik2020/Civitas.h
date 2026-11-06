#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Lod
{
    class TileLod : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TileLod(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Lod", "TileLod") {}
    public:
        void Configure(void* cfg) const { void* args[] = { cfg }; CallStatic("Configure", args, 1); }
        void ConfigureMemoryRaw(bool chunkTablesSparse, bool overlayPixelsPaged = true) const { void* args[] = { &chunkTablesSparse, &overlayPixelsPaged }; CallStatic("ConfigureMemoryRaw", args, 2); }
        void ResetFrameCounters() const { CallStatic("ResetFrameCounters", nullptr, 0); }
        void ReportMismatch(const char* what) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(what ? what : "") : nullptr; void* args[] = { managed_0 }; CallStatic("ReportMismatch", args, 1); }
        void ValidateStep(void* nations, void* grid) const { void* args[] = { nations, grid }; CallStatic("ValidateStep", args, 2); }
        void ShadowTraceStep(void* nations, void* grid, float iso) const { void* args[] = { nations, grid, &iso }; CallStatic("ShadowTraceStep", args, 3); }
        bool CompareTrace(void* n, void* grid, float iso, const char*& why) const { void* args[] = { n, grid, &iso, &why }; return CallStaticValue<bool>("CompareTrace", args, 4); }
        int FullSweep(void* nations, void* grid, float iso, void* log) const { void* args[] = { nations, grid, &iso, log }; return CallStaticValue<int>("FullSweep", args, 4); }
        bool CompareStateTrace(void* grid, int stateId, int minX, int minY, int maxX, int maxY, const char*& why) const { void* args[] = { grid, &stateId, &minX, &minY, &maxX, &maxY, &why }; return CallStaticValue<bool>("CompareStateTrace", args, 7); }
        int GrowChunksSkipped() const { return ReadStaticField<int>("GrowChunksSkipped"); }
        void SetGrowChunksSkipped(int value) const { WriteStaticField<int>("GrowChunksSkipped", value); }
        int TraceRowsSkipped() const { return ReadStaticField<int>("TraceRowsSkipped"); }
        void SetTraceRowsSkipped(int value) const { WriteStaticField<int>("TraceRowsSkipped", value); }
        int SweepChunksSkipped() const { return ReadStaticField<int>("SweepChunksSkipped"); }
        void SetSweepChunksSkipped(int value) const { WriteStaticField<int>("SweepChunksSkipped", value); }
        int UploadBlocksUploaded() const { return ReadStaticField<int>("UploadBlocksUploaded"); }
        void SetUploadBlocksUploaded(int value) const { WriteStaticField<int>("UploadBlocksUploaded", value); }
        int UploadBlocksDeferred() const { return ReadStaticField<int>("UploadBlocksDeferred"); }
        void SetUploadBlocksDeferred(int value) const { WriteStaticField<int>("UploadBlocksDeferred", value); }
        int CatchUpBlocks() const { return ReadStaticField<int>("CatchUpBlocks"); }
        void SetCatchUpBlocks(int value) const { WriteStaticField<int>("CatchUpBlocks", value); }
        int TracesPrewarmed() const { return ReadStaticField<int>("TracesPrewarmed"); }
        void SetTracesPrewarmed(int value) const { WriteStaticField<int>("TracesPrewarmed", value); }
        int RepaintSegmentsSkipped() const { return ReadStaticField<int>("RepaintSegmentsSkipped"); }
        void SetRepaintSegmentsSkipped(int value) const { WriteStaticField<int>("RepaintSegmentsSkipped", value); }
        int AuditUniformChunks() const { return ReadStaticField<int>("AuditUniformChunks"); }
        void SetAuditUniformChunks(int value) const { WriteStaticField<int>("AuditUniformChunks", value); }
        int AuditRuns() const { return ReadStaticField<int>("AuditRuns"); }
        void SetAuditRuns(int value) const { WriteStaticField<int>("AuditRuns", value); }
        int ControlChunksWalked() const { return ReadStaticField<int>("ControlChunksWalked"); }
        void SetControlChunksWalked(int value) const { WriteStaticField<int>("ControlChunksWalked", value); }
        int ControlChunksSkipped() const { return ReadStaticField<int>("ControlChunksSkipped"); }
        void SetControlChunksSkipped(int value) const { WriteStaticField<int>("ControlChunksSkipped", value); }
        int ControlTilesWalked() const { return ReadStaticField<int>("ControlTilesWalked"); }
        void SetControlTilesWalked(int value) const { WriteStaticField<int>("ControlTilesWalked", value); }
        int ControlGripEvals() const { return ReadStaticField<int>("ControlGripEvals"); }
        void SetControlGripEvals(int value) const { WriteStaticField<int>("ControlGripEvals", value); }
    };
}
