package net.sf.clipsrules.jni;

/**
 * @author G.D.Riley
 *
 */
public class BaseRouter implements Router {
    private static int BaseRouterNameIndex = 0;
    private String routerName;
    protected int priority;
    private String[] queryNames;
    protected Environment clips;

    /**
     * @param theEnv
     * @param theQueryNames
     */
    public BaseRouter(Environment theEnv, String[] theQueryNames) {
        this(theEnv, theQueryNames, 0);
    }

    /**
     * @param theEnv
     * @param theQueryNames
     * @param thePriority
     */
    public BaseRouter(Environment theEnv, String[] theQueryNames, int thePriority) {
        this(theEnv, theQueryNames, thePriority, "BaseRouter" + BaseRouterNameIndex++);
    }

    /**
     * @param theEnv
     * @param theQueryNames
     * @param thePriority
     * @param theRouterName
     */
    public BaseRouter(Environment theEnv, String[] theQueryNames, int thePriority, String theRouterName) {
        clips = theEnv;
        queryNames = theQueryNames;
        priority = thePriority;
        routerName = theRouterName;
        clips.addRouter(this);
    }

    /* ################ */
    /* Router Methods */
    /* ################# */

    /**
     *
     */
    @Override
    public int getPriority() {
        return priority;
    }

    /**
     *
     */
    @Override
    public String getName() {
        return routerName;
    }

    /**
     *
     */
    @Override
    public boolean query(String logName) {
        for (String name : queryNames) {
            if (name.equals(logName)) {
                return true;
            }
        }

        return false;
    }

    /**
     *
     */
    @Override
    public void write(String logName, String printString) {
    }

    /**
     *
     */
    @Override
    public int read(String routerName) {
        return -1;
    }

    /**
     *
     */
    @Override
    public int unread(String routerName, int theChar) {
        return -1;
    }

    /**
     *
     */
    @Override
    public void exit(boolean failure) {
    }

}