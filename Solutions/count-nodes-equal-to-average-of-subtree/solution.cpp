        int totalCount = leftCount + rightCount + 1;        int totalCount = leftCount + rightCount + 1;

        if (totalSum / totalCount == root->val) {        if (totalSum / totalCount == root->val) {
            matchingCount++;            matchingCount++;
        }        }

        return {totalSum, totalCount};        return {totalSum, totalCount};
    }    }

public:public:
    int averageOfSubtree(TreeNode* root) {    int averageOfSubtree(TreeNode* root) {
        matchingCount = 0;        matchingCount = 0;
        dfs(root);        dfs(root);
        return matchingCount;        return matchingCount;
    }    }
};};
