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
        void SetRowsPerPage(int rows) const { void* __callArgs[] = { &rows }; Call("SetRowsPerPage", __callArgs, 1); }
        void Build(void* tab) const { void* __callArgs[] = { tab }; Call("Build", __callArgs, 1); }
        void Refresh(int subjectId, bool subjectIsPlayer, void* nations, void* internals, void* text, void* sb) const { void* __callArgs[] = { &subjectId, &subjectIsPlayer, nations, internals, text, sb }; Call("Refresh", __callArgs, 6); }
        int RowsPerPage() const { return ReadStaticField<int>("RowsPerPage"); }
    };
}
