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
        void Configure(void* cfg) const { void* __callArgs[] = { cfg }; CallStatic("Configure", __callArgs, 1); }
        void ConfigureMemoryRaw(bool chunkTablesSparse, bool overlayPixelsPaged = true) const { void* __callArgs[] = { &chunkTablesSparse, &overlayPixelsPaged }; CallStatic("ConfigureMemoryRaw", __callArgs, 2); }
        void ResetFrameCounters() const { CallStatic("ResetFrameCounters", nullptr, 0); }
        void ReportMismatch(const char* what) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(what ? what : "") : nullptr; void* __callArgs[] = { managed_0 }; CallStatic("ReportMismatch", __callArgs, 1); }
        void ValidateStep(void* nations, void* grid) const { void* __callArgs[] = { nations, grid }; CallStatic("ValidateStep", __callArgs, 2); }
        void ShadowTraceStep(void* nations, void* grid, float iso) const { void* __callArgs[] = { nations, grid, &iso }; CallStatic("ShadowTraceStep", __callArgs, 3); }
        bool CompareTrace(void* n, void* grid, float iso, const char*& why) const { void* __callArgs[] = { n, grid, &iso, &why }; return CallStaticValue<bool>("CompareTrace", __callArgs, 4); }
        int FullSweep(void* nations, void* grid, float iso, void* log) const { void* __callArgs[] = { nations, grid, &iso, log }; return CallStaticValue<int>("FullSweep", __callArgs, 4); }
        bool CompareStateTrace(void* grid, int stateId, int minX, int minY, int maxX, int maxY, const char*& why) const { void* __callArgs[] = { grid, &stateId, &minX, &minY, &maxX, &maxY, &why }; return CallStaticValue<bool>("CompareStateTrace", __callArgs, 7); }
        int GrowChunksSkipped() const { return ReadStaticField<int>("GrowChunksSkipped"); }
        void GrowChunksSkipped(int value) const { WriteStaticField<int>("GrowChunksSkipped", value); }
        int TraceRowsSkipped() const { return ReadStaticField<int>("TraceRowsSkipped"); }
        void TraceRowsSkipped(int value) const { WriteStaticField<int>("TraceRowsSkipped", value); }
        int SweepChunksSkipped() const { return ReadStaticField<int>("SweepChunksSkipped"); }
        void SweepChunksSkipped(int value) const { WriteStaticField<int>("SweepChunksSkipped", value); }
        int UploadBlocksUploaded() const { return ReadStaticField<int>("UploadBlocksUploaded"); }
        void UploadBlocksUploaded(int value) const { WriteStaticField<int>("UploadBlocksUploaded", value); }
        int UploadBlocksDeferred() const { return ReadStaticField<int>("UploadBlocksDeferred"); }
        void UploadBlocksDeferred(int value) const { WriteStaticField<int>("UploadBlocksDeferred", value); }
        int CatchUpBlocks() const { return ReadStaticField<int>("CatchUpBlocks"); }
        void CatchUpBlocks(int value) const { WriteStaticField<int>("CatchUpBlocks", value); }
        int TracesPrewarmed() const { return ReadStaticField<int>("TracesPrewarmed"); }
        void TracesPrewarmed(int value) const { WriteStaticField<int>("TracesPrewarmed", value); }
        int RepaintSegmentsSkipped() const { return ReadStaticField<int>("RepaintSegmentsSkipped"); }
        void RepaintSegmentsSkipped(int value) const { WriteStaticField<int>("RepaintSegmentsSkipped", value); }
        int AuditUniformChunks() const { return ReadStaticField<int>("AuditUniformChunks"); }
        void AuditUniformChunks(int value) const { WriteStaticField<int>("AuditUniformChunks", value); }
        int AuditRuns() const { return ReadStaticField<int>("AuditRuns"); }
        void AuditRuns(int value) const { WriteStaticField<int>("AuditRuns", value); }
        int ControlChunksWalked() const { return ReadStaticField<int>("ControlChunksWalked"); }
        void ControlChunksWalked(int value) const { WriteStaticField<int>("ControlChunksWalked", value); }
        int ControlChunksSkipped() const { return ReadStaticField<int>("ControlChunksSkipped"); }
        void ControlChunksSkipped(int value) const { WriteStaticField<int>("ControlChunksSkipped", value); }
        int ControlTilesWalked() const { return ReadStaticField<int>("ControlTilesWalked"); }
        void ControlTilesWalked(int value) const { WriteStaticField<int>("ControlTilesWalked", value); }
        int ControlGripEvals() const { return ReadStaticField<int>("ControlGripEvals"); }
        void ControlGripEvals(int value) const { WriteStaticField<int>("ControlGripEvals", value); }
    };
}
