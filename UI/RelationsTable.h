#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class RelationsTable : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit RelationsTable(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "RelationsTable") {}
    public:
        void SetRowsPerPage(int rows) const { void* args[] = { &rows }; Call("SetRowsPerPage", args, 1); }
        void Build(void* tab) const { void* args[] = { tab }; Call("Build", args, 1); }
        void Refresh(int subjectId, bool subjectIsPlayer, void* nations, void* internals, void* text, void* sb) const { void* args[] = { &subjectId, &subjectIsPlayer, nations, internals, text, sb }; Call("Refresh", args, 6); }
        int RowsPerPage() const { return ReadStaticField<int>("RowsPerPage"); }
        void* n() const { return ReadField<void*>("n"); }
        void SetN(void* value) const { WriteField<void*>("n", value); }
        float opinion() const { return ReadField<float>("opinion"); }
        void SetOpinion(float value) const { WriteField<float>("opinion", value); }
        bool atWar() const { return ReadField<bool>("atWar"); }
        void SetAtWar(bool value) const { WriteField<bool>("atWar", value); }
        bool truce() const { return ReadField<bool>("truce"); }
        void SetTruce(bool value) const { WriteField<bool>("truce", value); }
        bool allied() const { return ReadField<bool>("allied"); }
        void SetAllied(bool value) const { WriteField<bool>("allied", value); }
        bool pact() const { return ReadField<bool>("pact"); }
        void SetPact(bool value) const { WriteField<bool>("pact", value); }
        bool puppet() const { return ReadField<bool>("puppet"); }
        void SetPuppet(bool value) const { WriteField<bool>("puppet", value); }
        bool union_() const { return ReadField<bool>("union"); }
        void SetUnion(bool value) const { WriteField<bool>("union", value); }
        bool unionRuler() const { return ReadField<bool>("unionRuler"); }
        void SetUnionRuler(bool value) const { WriteField<bool>("unionRuler", value); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* row() const { return ReadField<void*>("row"); }
        void SetRow(void* value) const { WriteField<void*>("row", value); }
        void* bar() const { return ReadField<void*>("bar"); }
        void SetBar(void* value) const { WriteField<void*>("bar", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* opinion() const { return ReadField<void*>("opinion"); }
        void SetOpinion(void* value) const { WriteField<void*>("opinion", value); }
        void* tags() const { return ReadField<void*>("tags"); }
        void SetTags(void* value) const { WriteField<void*>("tags", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* caption() const { return ReadField<void*>("caption"); }
        void SetCaption(void* value) const { WriteField<void*>("caption", value); }
        void* captionLabel() const { return ReadField<void*>("captionLabel"); }
        void SetCaptionLabel(void* value) const { WriteField<void*>("captionLabel", value); }
        void* row() const { return ReadField<void*>("row"); }
        void SetRow(void* value) const { WriteField<void*>("row", value); }
    };
}
